from typing import List

def has_close_elements():
    numbers = []
    n = int(input("Enter the number of elements: "))
    
    for i in range(n):
        num = float(input(f"Enter element {i+1}: "))
        numbers.append(num)

    threshold = float(input("Enter the threshold value: "))

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                print(True)
                return
    print(False)