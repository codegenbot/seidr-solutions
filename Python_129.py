```
def process_paths(paths):
    if "," in paths:
        paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
    else:
        if len(paths) > 0 and "-" in paths:
            paths = [[*map(int, paths.strip().split("-"))]]
        else:
            print("Please enter a valid path (e.g., 1-2).")
            return None

paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
process_paths(paths)