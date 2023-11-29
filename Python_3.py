from typing import List


def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False


def main():
    n = int(input())
    nums = []
    for _ in range(n):
        num = int(input())
        nums.append(num)
    result = below_zero(nums)
    print(result)


if __name__ == "__main__":
    main()