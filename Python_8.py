try:
    n = int(input().strip())
    numbers = list(map(int, input().strip().split()))
    res = [num for num in numbers if num % 2 == 0]
    print(sum(res))
except:
    print("An error occurred. Please try again.")