def remove_duplicates(numbers_list):
    return sorted(list(set(numbers_list)))

if __name__ == "__main__":
    numbers_list = list(map(int, input().split()))
    result = remove_duplicates(numbers_list)
    print(result)