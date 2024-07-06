
import collections

def minPath(grid, k):
    # ... existing code ...
    
    n = int(input("Enter the size of the grid: "))
    m = int(input("Enter the number of steps: "))
    k = int(input("Enter the maximum allowed value for the sum of the elements in a path: "))

# Call minPath with the user input
result = minPath(grid, k)
print(result)
