```
def process_paths():
    paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
    
    if "-" in paths and "," not in paths:
        try:
            paths = [[*map(int, paths.strip().split("-"))]]
        except ValueError:
            print("Please enter a valid path (e.g., 1-2).")
    elif "," in paths and "- " not in paths:
        try:
            paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
        except ValueError:
            print("Please enter valid path numbers. For example, 1-2.")
    else:
        print(
            "Please enter a valid path (e.g., 1-2) or multiple paths separated by commas."
        )
        
    if not paths:
        return None

    minPath = float('inf')  

    for path in paths:
        print(f"Path is: {path}")
        if len(path) < minPath:
            minPath = len(path)

    return minPath

shortest_path = process_paths()
if shortest_path is not None:
    print(f"The shortest path has {shortest_path} nodes.")