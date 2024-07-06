```
def minPathSum():
    m = []
    k = int(input("Enter the value of k: "))
    n = int(input("Enter the size of the matrix (n): "))
    
    for i in range(n):
        row = list(map(int, input(f"Enter the row {i+1}: ").split()))
        m.append(row)
        
    min_path = []
    for i in range(n):
        for j in range(n):
            path = [m[i][j]]
            if len(min_path) == 0 or len(path) < len(min_path):
                min_path = path
    return min_path

print(minPathSum([[1], [2]]))