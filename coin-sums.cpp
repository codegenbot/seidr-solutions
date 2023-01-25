#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int amount;
	char *end;
	int quarters, dimes, nickles, pennies;
	if (argc != 2) {
		printf("Usage: ./change <amount>\n");
		return 1;
	}
	amount = strtol(argv[1], &end, 10);
	if (*end != '\0') {
		printf("Usage: ./change <amount>\n");
		return 1;
	}
	quarters = amount / 25;
	amount = amount % 25;
	dimes = amount / 10;
	amount = amount % 10;
	nickles = amount / 5;
	amount = amount % 5;
	pennies = amount;
	printf("%d\n", quarters * 1000 + dimes * 100 + nickles * 10 + pennies);
	return 0;
}
