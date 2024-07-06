def remove_duplicates(numbers: list[int]) -> list[int]:
    global input  
    unique_numbers = [int(num) for num in set(map(int, input("Enter space-separated numbers: ").split()))]
    return sorted(unique_numbers)