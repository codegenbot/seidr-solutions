def calculate_average_temperature():
    temperatures = list(
        map(float, input("Enter your daily temperatures (space-separated): ").split())
    )
    average_temperature = sum(temperatures) / len(temperatures)
    print(f"Average temperature: {average_temperature:.2f}°C")