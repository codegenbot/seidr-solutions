```python
def remove_duplicates():
    """
    This function removes duplicate numbers from user's input.
    
    Returns:
        list: A list of unique integers entered by the user.
    """
    numbers = input("Enter comma-separated numbers: ")
    return list(set(map(int, numbers.split(","))))