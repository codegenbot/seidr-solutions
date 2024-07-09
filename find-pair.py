```
def find_pair(input_list):
    target_sum = int(input())
    for i in range(len(input_list)):
        for j in range(i+1, len(input_list)):
            if input_list[i] + input_list[j] == target_sum:
                return '{}\n{}'.format(input_list[i], input_list[j])
    return 'No pair found'

if __name__ == '__main__':
    n = int(input())
    nums = [int(x) for x in input().split()]
    print(find_pair(nums))