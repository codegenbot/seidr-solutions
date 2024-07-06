
import sys
def add(x: float, y: float) -> float:
    x = float(sys.argv[1])
    y = float(sys.argv[2])
    return x + y
if __name__ == '__main__':
    result = add(sys.argv[1], sys.argv[2])
    print(result) # Output: 3.8