def solution(lst):
    if len(lst) > 0:
        odd_sum = 0
        for num in lst:
            if num % 2 != 0:
                odd_sum += num
        return odd_sum
    else:
        return None

if __name__ == "__main__":
    user_input = input("Enter a list of numbers (space separated): ")
    user_list = [int(num) for num in user_input.split()]
    print(solution(user_list))