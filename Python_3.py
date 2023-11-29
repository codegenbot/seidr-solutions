def main():
    nums = list(map(int, input("Enter the elements separated by space: ").split()))
    result = below_zero(nums)
    print(result)