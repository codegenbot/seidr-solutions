
def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:

    # Use a deque to keep track of the neighbours
    queue = deque()

    # Use a dictionary to keep track of the visited cells
    visited = {}

    # Add the starting point to the queue
    queue.append([0, 0])

    # Add the starting point to the visited dictionary
    visited[0] = [0]

    # Continue until the queue is empty
    while queue:
        # Pop the first element from the queue
        current = queue.popleft()

        # Get the neighbours of the current cell
        neighbours = getNeighbours(current)

        # Iterate through the neighbours
        for neighbour in neighbours:
            # If the neighbour has not been visited
            if neighbour not in visited:
                # Add the neighbour to the queue
                queue.append(neighbour)

                # Add the neighbour to the visited dictionary
                visited[neighbour] = current

    # Return the visited dictionary
    return visited

def getNeighbours(current):
    """
    Given a cell, return all of its neighbours.

    Examples:

        Input: [0, 0]
        Output: [[0, 1], [1, 0]]

        Input: [1, 1]
        Output: [[0, 1], [1, 0], [1, 2], [2, 1]]
    """
    # Create a list to keep track of the neighbours
    neighbours = []

    # Add the neighbour to the right
    neighbours.append([current[0], current[1] + 1])

    # Add the neighbour to the bottom
    neighbours.append([current[0] + 1, current[1]])

    # Return the neighbours
    return neighbours
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
