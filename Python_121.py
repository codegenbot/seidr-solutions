def solution(lst):
    return len([i for i in lst if i % 2 != 0])

num = int(input("Enter the number of elements: "))
numbers = [int(input(f"Enter element {i+1}: ")) for i in range(num)]
print(solution(numbers))