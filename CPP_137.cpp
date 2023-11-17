/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<iostream>
std::string compare_one(boost::any a, boost::any b) {
	if (a.type() == typeid(int) && b.type() == typeid(int)) {
		int num1 = boost::any_cast<int>(a);
		int num2 = boost::any_cast<int>(b);
		if (num1 > num2) return std::to_string(num1);
		if (num2 > num1) return std::to_string(num2);
		if (num1 == num2) return "None";
	}
	if (a.type() == typeid(double) && b.type() == typeid(int)) {
		double num1 = boost::any_cast<double>(a);
		int num2 = boost::any_cast<int>(b);
		if (num1 > num2) return std::to_string(num1);
		if (num2 > num1) return std::to_string(num2);
		if (num1 == num2) return "None";
	}
	if (a.type() == typeid(int) && b.type() == typeid(double)) {
		int num1 = boost::any_cast<int>(a);
		double num2 = boost::any_cast<double>(b);
		if (num1 > num2) return std::to_string(num1);
		if (num2 > num1) return std::to_string(num2);
		if (num1 == num2) return "None";
	}
	if (a.type() == typeid(double) && b.type() == typeid(double)) {
		double num1 = boost::any_cast<double>(a);
		double num2 = boost::any_cast<double>(b);
		if (num1 > num2) return std::to_string(num1);
		if (num2 > num1) return std::to_string(num2);
		if (num1 == num2) return "None";
	}
	if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
		std::string num1 = boost::any_cast<std::string>(a);
		std::string num2 = boost::any_cast<std::string>(b);
		if (num1 > num2) return num1;
		if (num2 > num1) return num2;
		if (num1 == num2) return "None";
	}
	if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
		int num1 = boost::any_cast<int>(a);
		std::string num2 = boost::any_cast<std::string>(b);
		if (num1 > std::stod(num2)) return std::to_string(num1);
		else return num2;
	}
	if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
		std::string num1 = boost::any_cast<std::string>(a);
		int num2 = boost::any_cast<int>(b);
		if (std::stoi(num1) > num2) return num1;
		else return std::to_string(num2);
	}
	if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
		std::string num1 = boost::any_cast<std::string>(a);
		double num2 = boost::any_cast<double>(b);
		if (std::stod(num1) > num2) return num1;
		else return std::to_string(num2);
	}
	if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
		double num1 = boost::any_cast<double>(a);
		std::string num2 = boost::any_cast<std::string>(b);
		if (num1 > std::stod(num2)) return std::to_string(num1);
		else return num2;
	}
}
int main() {
	std::cout << compare_one(1, 2.5) << "\n";
	std::cout << compare_one(1, "2,3") << "\n";
	std::cout << compare_one("5,1", "6") << "\n";
	std::cout << compare_one("1", 1) << "\n";
}
