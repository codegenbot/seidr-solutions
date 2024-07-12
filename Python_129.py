def min_length(paths):
    return min(sum(abs(int(x) - int(y)) for x, y in paths[0]))

paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
if "," not in paths:
    print("Please enter multiple paths separated by commas")
else:
    paths = [list(map(int, path.split("-")) for path in paths.split(","))])
    print(min_length(paths))