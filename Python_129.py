```
def min_length(paths):
    return min(sum(map(int, ''.join(path))) for path in paths)

paths = []
while True:
    path = input("Enter a path (or 'stop' if finished): ")
    if path.lower() == 'stop':
        break
    paths.append(path)

print(min_length(paths))