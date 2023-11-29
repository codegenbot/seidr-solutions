from typing import List


def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False


def main():
    n = int(input("Enter the number of elements: "))
    nums = list(map(int, input("Enter the elements separated by spaces: ").split()))[:n]
    result = below_zero(nums)
    print(result)


if __name__ == "__main__":
    main()