
"""
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
    inp = input("Enter data: ")
    data_list = inp.split()
    print ("data_list",data_list)
    print (data_list)
    n = len(data_list)
    diff_list = []

    for i in range(n):
        difference = abs(int(data_list[i]) - int(data_list[n-1]))# absolute value
        diff_list.append(difference)
    print ("diff_list",diff_list)
    min_value = min(diff_list)
    print("min_value", min(diff_list))
    # data_list_sorted = sorted(data_list, key=lambda data_list: str(data_list))
    # print(data_list_sorted)
    # output_list = [(data_list_sorted[i],data_list_sorted[i-1]) for i in range(len(data_list_sorted)) if data_list_sorted[i] - data_list_sorted[i-1]<=min_value]
    # print("output_list",output_list)
