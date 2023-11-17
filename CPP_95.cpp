/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
	if(dict.size() == 0)
		return false;
	bool lower = true;
	bool upper = true;
	for(auto it = dict.begin(); it != dict.end(); it++){
		for(int i = 0; i < it->first.length(); i++){
			if(isupper(it->first[i]))
				lower = false;
			if(islower(it->first[i]))
				upper = false;
		}
	}
	if(lower || upper)
		return true;
	else
		return false;
}
int main(){
	map<string,string> dict;
	dict["a"] = "apple";
	dict["b"] = "banana";
	dict["c"] = "cat";
	dict["d"] = "dog";
	dict["e"] = "elephant";
	dict["f"] = "fish";
	dict["g"] = "goat";
	dict["h"] = "horse";
	dict["i"] = "iguana";
	dict["j"] = "jackal";
	dict["k"] = "kangaroo";
	dict["l"] = "lion";
	dict["m"] = "monkey";
	dict["n"] = "nest";
	dict["o"] = "ostrich";
	dict["p"] = "pig";
	dict["q"] = "quail";
	dict["r"] = "rabbit";
	dict["s"] = "snake";
	dict["t"] = "tiger";
	dict["u"] = "unicorn";
	dict["v"] = "vulture";
	dict["w"] = "whale";
	dict["x"] = "xray";
	dict["y"] = "yak";
	dict["z"] = "zebra";
	dict["A"] = "apple";
	dict["B"] = "banana";
	dict["C"] = "cat";
	dict["D"] = "dog";
	dict["E"] = "elephant";
	dict["F"] = "fish";
	dict["G"] = "goat";
	dict["H"] = "horse";
	dict["I"] = "iguana";
	dict["J"] = "jackal";
	dict["K"] = "kangaroo";
	dict["L"] = "lion";
	dict["M"] = "monkey";
	dict["N"] = "nest";
	dict["O"] = "ostrich";
	dict["P"] = "pig";
	dict["Q"] = "quail";
	dict["R"] = "rabbit";
	dict["S"] = "snake";
	dict["T"] = "tiger";
	dict["U"] = "unicorn";
	dict["V"] = "vulture";
	dict["W"] = "whale";
	dict["X"] = "xray";
	dict["Y"] = "yak";
	dict["Z"] = "zebra";
	dict["1"] = "apple";
	dict["2"] = "banana";
	dict["3"] = "cat";
	dict["4"] = "dog";
	dict["5"] = "elephant";
	dict["6"] = "fish";
	dict["7"] = "goat";
	dict["8"] = "horse";
	dict["9"] = "iguana";
	dict["0"] = "jackal";
	dict["!"] = "kangaroo";
	dict["@"] = "lion";
	dict["#"] = "monkey";
	dict["$"] = "nest";
	dict["%"] = "ostrich";
	dict["^"] = "pig";
	dict["&"] = "quail";
	dict["*"] = "rabbit";
	dict["("] = "snake";
	dict[")"] = "tiger";
	dict["_"] = "unicorn";
	dict["+"] = "vulture";
	dict["-"] = "whale";
	dict["="] = "xray";
	dict["{"] = "yak";
	dict["}"] = "zebra";
	dict["["] = "apple";
	dict["]"] = "banana";
	dict[":"] = "cat";
	dict[";"] = "dog";
	dict["'"] = "elephant";
	dict["\""] = "fish";
	dict["<"] = "goat";
	dict[">"] = "horse";
	dict["?"] = "iguana";
	dict["/"] = "jackal";
	dict["."] = "kangaroo";
	dict[","] = "lion";
	dict["`"] = "monkey";
	dict["~"] = "nest";
	dict["\\"] = "ostrich";
	dict["|"] = "pig";
	dict[" "] = "quail";
	dict["\n"] = "rabbit";
	dict["\t"] = "snake";
	dict["\v"] = "tiger";
	dict["\b"] = "unicorn";
	dict["\r"] = "vulture";
	dict["\f"] = "whale";
	dict["\a"] = "xray";
	dict["\0"] = "yak";
	dict["\1"] = "zebra";
	dict["\2"] = "apple";
	dict["\3"] = "banana";
	dict["\4"] = "cat";
	dict["\5"] = "dog";
	dict["\6"] = "elephant";
	dict["\7"] = "fish";
	dict["\8"] = "goat";
	dict["\9"] = "horse";
	dict["\10"] = "iguana";
	dict["\11"] = "jackal";
	dict["\12"] = "kangaroo";
	dict["\13"] = "lion";
	dict["\14"] = "monkey";
	dict["\15"] = "nest";
	dict["\16"] = "ostrich";
	dict["\17"] = "pig";
	dict["\18"] = "quail";
	dict["\19"] = "rabbit";
	dict["\20"] = "snake";
	dict["\21"] = "tiger";
	dict["\22"] = "unicorn";
	dict["\23"] = "vulture";
	dict["\24"] = "whale";
	dict["\25"] = "xray";
	dict["\26"] = "yak";
	dict["\27"] = "zebra";
	dict["\28"] = "apple";
	dict["\29"] = "banana";
	dict["\30"] = "cat";
	dict["\31"] = "dog";
	dict["\32"] = "elephant";
	dict["\33"] = "fish";
	dict["\34"] = "goat";
	dict["\35"] = "horse";
	dict["\36"] = "iguana";
	dict["\37"] = "jackal";
	dict["\38"] = "kangaroo";
	dict["\39"] = "lion";
	dict["\40"] = "monkey";
	dict["\41"] = "nest";
	dict["\42"] = "ostrich";
	dict["\43"] = "pig";
	dict["\44"] = "quail";
	dict["\45"] = "rabbit";
	dict["\46"] = "snake";
	dict["\47"] = "tiger";
	dict["\48"] = "unicorn";
	dict["\49"] = "vulture";
	
