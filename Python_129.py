
import collections

def minPath(grid, k):
    # Initialize a queue to keep track of the paths to explore
    queue = collections.deque([((0, 0), 0)])
    
    while queue:
        (current_position, current_cost) = queue.popleft()
        
        # If we have found a path with cost <= k, return it
        if current_cost <= k:
            return current_cost
        
        # Add neighbors to the queue
        for neighbor in getNeighbors(current_position):
            new_cost = current_cost + 1
            if new_cost <= k:
                queue.append((neighbor, new_cost))

# Read user input
n = int(input("Enter the size of the grid: "))
m = int(input("Enter the number of steps: "))
k = int(input("Enter the maximum allowed value for the sum of the elements in a path: "))

# Call minPath with the user input
result = minPath((n, m), k)
print(result)