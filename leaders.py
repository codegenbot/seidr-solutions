input_str = input()
input_list = list(map(int, input_str.split()))
print(' '.join(map(str, [x for i,x in enumerate(reversed(input_list)) if all(x>=y for y in input_list[i+1:]))]))