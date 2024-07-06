def check():
    input_list = list(map(int, input().split()))
    odd_sum = double_the_difference(input_list)
    print(2 * (odd_sum - sum(input_list) // 2))