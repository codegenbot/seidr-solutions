input_str = input()
input_list = list(map(int, input_str.split()))
print(' '.join(str(i) if (i >= all(input_list[i+1:])) else '' for i in range(len(input_list)-1,-1,-1)))