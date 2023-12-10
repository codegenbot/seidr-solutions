[PYTHON]
def leaders(v):
    result = []
    current_leader = INT_MIN
    for i in range(len(v) - 1, -1, -1):
        if v[i] > current_leader:
            current_leader = v[i]
            result.append(current_leader)
    return result

def main():
    input = [1, 451]
    output = leaders(input)
    print(output)

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([1, 451]) == [1, 451]
# Test case 2:
assert leaders([2, 1000, 0]) == [2, 1000, 0]
# Test case 3:
assert leaders([2, 0, 1000]) == [1, 1000]
[/TESTS]
