try:
    input_list = list(map(int, input().split()))
    print(sum(input_list))
except ValueError:
    print("Please provide a list of integers separated by spaces.")