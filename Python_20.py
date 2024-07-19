def find_closest_elements(numbers):
    numbers.sort()
    return numbers[:2]

if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    closest_pair = find_closest_elements(numbers)
    print(*closest_pair)