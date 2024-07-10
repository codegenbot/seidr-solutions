from sys import stdin

def main():
    numbers = list(map(float, stdin.readline().strip().split()))
    result = find_closest_elements(numbers)
    print(result)

if __name__ == "__main__":
    main()