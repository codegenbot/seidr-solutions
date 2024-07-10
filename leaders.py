Here is the completed Python code:

def leaders(a):
    return [a[i] for i in range(len(a)-1, -1, -1) if all(a[i] >= a[j] for j in range(i+1, len(a)))]

input_str = input()
input_list = list(map(int, input_str.split()))
output_list = leaders(input_list)
print(' '.join(str(x) for x in output_list))