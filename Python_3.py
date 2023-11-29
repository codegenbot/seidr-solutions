from typing import List


def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False


def main():
    nums = [int(num) for num in input().split()]
    result = below_zero(nums)
    print(result)


if __name__ == "__main__":
    main()