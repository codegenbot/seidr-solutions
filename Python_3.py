def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result = below_zero(nums[:n])
    print(result)


if __name__ == "__main__":
    main()