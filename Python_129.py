```
def process_paths():
    while True:
        paths = input("Enter a list of paths (e.g., 1-2,3-4): ")
        try:
            if "," in paths: 
                paths = [[*map(int, x.strip().split("-"))] for x in paths.split(",")]
            elif "-" in paths:
                paths = [[*map(int, paths.strip().split("-"))]]
            else:
                raise ValueError
            break
        except ValueError:
            print("Please enter valid path numbers. For example, 1-2.")

    minPath = float('inf')  

    for path in paths:
        print(f"Path is: {path}")
        if len(path) < minPath:
            minPath = len(path)

    return minPath

shortest_path = process_paths()
print(f"The shortest path has {shortest_path} nodes.")