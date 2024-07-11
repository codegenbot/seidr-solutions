input_str = input()
input_list = list(map(int, input_str.split()))
print(' '.join(leaders(input_list)))