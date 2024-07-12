```
def process_paths():
    while True:
        paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
        if "," in paths:
            try:
                paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
                break
            except ValueError:
                print("Please enter valid path numbers. For example, 1-2.")
        elif len(paths) > 0 and "-" in paths:
            try:
                paths = [[*map(int, paths.strip().split("-"))]]
                break
            except ValueError:
                print("Please enter a valid path (e.g., 1-2).")
        else:
            print(
                "Please enter a valid path (e.g., 1-2) or multiple paths separated by commas."
            )

    minPath = float('inf')  

    for path in paths:
        print(f"Path is: {path}")
        if len(path) < minPath:
            minPath = len(path)

    return minPath

shortest_path = process_paths()
print(f"The shortest path has {shortest_path} nodes.")