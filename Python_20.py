if __name__ == "__main__":
    num1, num2 = map(int, input().split())
    numbers = [num1, num2]
    closest_pair = find_closest_elements(numbers)
    print(min(closest_pair), max(closest_pair))