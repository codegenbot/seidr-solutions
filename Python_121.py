def solution(lst):
    try:
        lst = list(map(int, input().split()))
        
        if len(lst) != 3 or not all(isinstance(num, int) for num in lst):
            return "Invalid input. Please enter exactly three integers."

    except ValueError:
        return "Invalid input. Please enter three integers separated by spaces."