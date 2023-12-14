
[SEED]
def main():
    # Implement your function below.
    def bouncing_ball(starting_height, first_bounce_height, num_bounces):
        return 0.0
    # Do not modify anything below this line.
    for line in sys.stdin:
        h, b, n = [float(x) for x in line.split()]
        print("{:.4f}".format(bouncing_ball(h, b, int(n))))
[/SEED]
