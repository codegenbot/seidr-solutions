```python
def min_length(paths):
    return min(sum(map(int, [int(x) for x in path])) for path in paths)

while True:
    paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
    try:
        paths = [[int(x) for x in path.strip().split('-')] for path in paths.split(',')]
        break
    except ValueError:
        print("Invalid input. Try again!")

print(min_length(paths))