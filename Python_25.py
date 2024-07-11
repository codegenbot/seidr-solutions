def main():
    try:
        result = factorize()
        if result:
            print("Prime factors are:", *result)
    except Exception as e:
        print(f"An error occurred: {e}")