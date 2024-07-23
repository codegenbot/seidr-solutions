def solution(n):
    total = 0
    for i in range(1, n+1):
        num = int(input(f"Enter number for iteration {i}: "))
        if num % 2 != 0:
            total += num
    return total

if __name__ == "__main__":
    user_input = input("Enter the number of iterations: ")
    try:
        n = int(user_input)
        print(solution(n))
    except ValueError:
        print("Invalid input. Please enter a positive integer.")