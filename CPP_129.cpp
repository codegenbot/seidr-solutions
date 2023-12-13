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

void test_case_1() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {0, 0};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_2() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {0, 0};
    pair<int, int> goal = {3, 0};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_3() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {0, 0};
    pair<int, int> goal = {3, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_4() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {0, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_5() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_6() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_7() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_8() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_9() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_10() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_11() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {3, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_12() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {3, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_13() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {3, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_14() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {0, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_15() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 0};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_16() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_17() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 0};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_18() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_19() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_20() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_21() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 1};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_22() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_23() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {2, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_24() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_25() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 3};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_26() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_27() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_28() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_29() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_30() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_31() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_32() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_33() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_34() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_35() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_36() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_37() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_38() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_39() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_40() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_41() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_42() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_43() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_44() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_45() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_46() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_47() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_48() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_49() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_50() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_51() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_52() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_53() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_54() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_55() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_56() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_57() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_58() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_59() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_60() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_61() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_62() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_63() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_64() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_65() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_66() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_67() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_68() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_69() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_70() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_71() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_72() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_73() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_74() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_75() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_76() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_77() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_78() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_79() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_80() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_81() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_82() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_83() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_84() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_85() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_86() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_87() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_88() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_89() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_90() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_91() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_92() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_93() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_94() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_95() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_96() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_97() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_98() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_99() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

void test_case_100() {
    vector<vector<char>> grid = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    pair<int, int> start = {3, 0};
    pair<int, int> goal = {1, 2};
    int result = min_path(grid, start);
    cout << "result: " << result << endl;
}

