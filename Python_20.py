if __name__ == "__main__":
    numbers = list(map(float, input().split()))
    closest_elements = find_closest_elements(numbers)
    print(closest_elements)