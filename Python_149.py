def sorted_list_sum(lst):
    return sum(sorted([int(i) for i in input().split()]))
input_str = ""
while True:
    s = input()
    if not s: break
    input_str += s + " "
input_str = input_str.strip()
return sum(sorted([int(i) for i in input_str.split()]))