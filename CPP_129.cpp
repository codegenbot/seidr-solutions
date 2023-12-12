[PYTHON]
def minPath(graph, start, end):
    # Initialize the shortest path distance to infinity
    minDistance = float('inf')

    # Initialize the queue with the starting node
    queue = [start]

    # Loop through the graph until the queue is empty
    while queue:
        # Get the current node and its distance from the starting node
        currNode = queue.pop(0)
        currDistance = graph[currNode][start]

        # If the current node is the destination node, return its distance
        if currNode == end:
            return minDistance

        # Update the shortest path distance and add neighboring nodes to the queue
        for neighbor in graph[currNode]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)

    # If no path is found, return infinity
    return float('inf')
[/PYTHON]
[TESTS]
# Test case 1:
assert minPath([[1, 3], [3, 2]], 0, 1) == 1
# Test case 2:
assert minPath([[5, 9], [4, 1]], 0, 1) == 2
# Test case 3:
assert minPath([[1, 3], [3, 2], [2, 1]], 0, 2) == 2
# Test case 4:
assert minPath([[5, 9], [4, 1], [1, 3]], 0, 2) == 3
# Test case 5:
assert minPath([[1, 3], [3, 2], [2, 1], [1, 4]], 0, 3) == 3
[/TESTS]
