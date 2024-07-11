input_str = input()
input_list = list(map(int, input_str.split()))
print(' '.join([str(i) for i in input_list if all(j <= i for j in input_list[input_list.index(i)+1:]))])