```python
def car_race_collision():
    n = int(input("Enter the number of tracks: "))
    collisions = n * (n - 1) // 2
    print(f"There will be {collisions} collisions.")

if __name__ == "__main__":
    car_race_collision()