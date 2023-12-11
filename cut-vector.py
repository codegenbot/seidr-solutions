```
import numpy as np

def find_min_difference(vector):
    # Sort the vector in ascending order
    sorted_vector = np.sort(vector)
    
    # Find the minimum difference between adjacent elements
    min_diff = np.inf
    for i in range(len(sorted_vector) - 1):
        diff = sorted_vector[i+1] - sorted_vector[i]
        if diff < min_diff:
            min_diff = diff
    
    return min_diff

def cut_vector(vector, spot):
    # Split the vector into two subvectors at the specified spot
    subvector1 = np.array(sorted_vector[:spot])
    subvector2 = np.array(sorted_vector[spot:])
    
    return subvector1, subvector2

def main():
    # Read input from stdin
    vector = [int(x) for x in sys.stdin.readline().split()]
    
    # Find the minimum difference between adjacent elements
    min_diff = find_min_difference(vector)
    
    # Print output to stdout
    print("Minimum Difference:", min_diff)
    print("Subvectors:")
    for subvector in cut_vector(vector, spot):
        print(subvector)

if __name__ == "__main__":
    main()
```