def check(func):
    def wrapper(*args, **kwargs):
        return func(*args, **kwargs)
    return wrapper

@check
def remove_duplicates(numbers):
    return list(set(numbers))

if __name__ == "__main__":
    numbers_list = list(map(int, input().split()))
    result = remove_duplicates(numbers_list)
    print(result)