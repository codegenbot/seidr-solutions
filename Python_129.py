```
def min_length(paths):
    return min(sum(int(x) for x in "".join(f"{y}-{z}" for y, z in path)) for path in paths)

paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
if "," not in paths:
    print("Please enter multiple paths separated by commas")
else:
    paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
    print(min_length(paths))