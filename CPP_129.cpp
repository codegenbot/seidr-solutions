[PYTHON]
def min_path(grid, start):
    # Initialize the minimum path sum
    min_sum = float('inf')
    # Initialize the queue with the starting position
    queue = [start]
    # Loop until the queue is empty or the minimum path sum is found
    while queue and min_sum == float('inf'):
        # Get the current position from the queue
        current_position = queue.pop(0)
        # Get the value at the current position
        current_value = grid[current_position[0]][current_position[1]]
        # Check if the current position is the goal
        if issame(current_position, (len(grid)-1, len(grid[0])-1)):
            # If the current position is the goal, update the minimum path sum
            min_sum = current_value
        else:
            # If the current position is not the goal, add its neighbors to the queue
            for neighbor in get_neighbors(grid, current_position):
                queue.append(neighbor)
    # Return the minimum path sum
    return min_sum

def get_neighbors(grid, position):
    # Get the row and column of the current position
    row, col = position
    # Initialize an empty list to store the neighbors
    neighbors = []
    # Check if the cell to the north is valid
    if row > 0 and grid[row - 1][col] != 'X':
        # If the cell to the north is valid, add it to the list of neighbors
        neighbors.append((row - 1, col))
    # Check if the cell to the south is valid
    if row < len(grid) - 1 and grid[row + 1][col] != 'X':
        # If the cell to the south is valid, add it to the list of neighbors
        neighbors.append((row + 1, col))
    # Check if the cell to the west is valid
    if col > 0 and grid[row][col - 1] != 'X':
        # If the cell to the west is valid, add it to the list of neighbors
        neighbors.append((row, col - 1))
    # Check if the cell to the east is valid
    if col < len(grid[0]) - 1 and grid[row][col + 1] != 'X':
        # If the cell to the east is valid, add it to the list of neighbors
        neighbors.append((row, col + 1))
    return neighbors

def issame(position1, position2):
    return position1[0] == position2[0] and position1[1] == position2[1]

def main():
    grid = [['X', 'X', 'X', 'X'], ['X', 'O', 'O', 'X'], ['X', 'X', 'O', 'X'], ['X', 'O', 'X', 'X']]
    start = (3, 0)
    goal = (0, 0)
    result = min_path(grid, start)
    print(result)

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<vector<int>> grid = {{1, 3}, {3, 2}};
    int start = 10;
    assert(issame(minPath(grid, start), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
}
```
You must only return correct code. Remove any triple quotes, language name or explanations.
[/TESTS]
