[PYTHON]
def get_neighbors(grid, position):
    neighbors = []
    if grid[position[0]][position[1]] == 'X':
        return neighbors
    row, col = position
    if row > 0 and grid[row - 1][col] != 'X':
        neighbors.append((row - 1, col))
    if row < len(grid) - 1 and grid[row + 1][col] != 'X':
        neighbors.append((row + 1, col))
    if col > 0 and grid[row][col - 1] != 'X':
        neighbors.append((row, col - 1))
    if col < len(grid[0]) - 1 and grid[row][col + 1] != 'X':
        neighbors.append((row, col + 1))
    return neighbors

def min_path(grid, start):
    min_sum = float('inf')
    queue = [start]
    visited = set()
    while queue:
        current_position = queue.pop(0)
        if current_position in visited:
            continue
        visited.add(current_position)
        current_value = grid[current_position[0]][current_position[1]]
        if current_value == 'X':
            continue
        if issame(current_position, (len(grid)-1, len(grid[0])-1)):
            min_sum = min(min_sum, current_value)
        else:
            for neighbor in get_neighbors(grid, current_position):
                queue.append(neighbor)
    return min_sum

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

[PYTHON]
def get_neighbors(grid, position):
    neighbors = []
    if grid[position[0]][position[1]] == 'X':
        return neighbors
    row, col = position
    if row > 0 and grid[row - 1][col] != 'X':
        neighbors.append((row - 1, col))
    if row < len(grid) - 1 and grid[row + 1][col] != 'X':
        neighbors.append((row + 1, col))
    if col > 0 and grid[row][col - 1] != 'X':
        neighbors.append((row, col - 1))
    if col < len(grid[0]) - 1 and grid[row][col + 1] != 'X':
        neighbors.append((row, col + 1))
    return neighbors

def min_path(grid, start):
    min_sum = float('inf')
    queue = [start]
    visited = set()
    while queue:
        current_position = queue.pop(0)
        if current_position in visited:
            continue
        visited.add(current_position)
        current_value = grid[current_position[0]][current_position[1]]
        if current_value == 'X':
            continue
        if issame(current_position, (len(grid)-1, len(grid[0])-1)):
            min_sum = min(min_sum, current_value)
        else:
            for neighbor in get_neighbors(grid, current_position):
                queue.append(neighbor)
    return min_sum

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
